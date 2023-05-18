////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/10/2023
//// C2A7E1_main.c
//// Win10
//// Visual C++ 2022, ISO C17
//// C2A7E1_main.c will perform same "hashing" operation and store the words 
//// in ordered binary trees like those in the "binary tree" portion of the code
//// instead of in singly linked lists.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define LINE_LEN 256                   // size of input buffer
//#define BUFFMT "%255"                  // field width for input buffer scan
//#define MIN_ARGS 3                     // fewest command line arguments
//#define FILE_ARG_IX 1                  // index of file name argument
//#define BINS_ARG_IX 2                  // index of bin count argument
//#define NUMZER0 0                      // no magic numbers
//#define NUM0NE 1                       // no magic numbers
//
//// Memory allocation
//void *SafeMalloc(size_t size) {
//    void *vp;
//    // allocation fail test
//    if ((vp = malloc(size)) == NULL)
//    {
//        fputs("Out of memory\n", stderr);
//        exit(EXIT_FAILURE);
//    }
//    return(vp);
//}
//// Open file
//FILE *OpenFile(const char *fileName) {
//    FILE *fp;
//    // open fail test
//    if ((fp = fopen(fileName, "r")) == NULL)
//    {
//        fprintf(stderr, "File %s didn't open.\n", fileName);
//        perror(fileName);
//        exit(EXIT_FAILURE);
//    }
//    return fp;
//}
//typedef struct Node NODE;
//struct Node
//{
//    char *strng;                        // points to string this node represents
//    size_t count;                       // number of occurrences of this string
//    NODE *left, *right;                 // pointers to left and right children
//};
//typedef struct                          // type of table array elements
//{
//    size_t nodes;                       // # of list nodes for this bin
//    NODE *firstNode;                    // 1st node in this bin's list
//} BIN;
//typedef struct                          // type of hash table descriptor
//{
//    size_t bins;                        // bins in hash table
//    BIN *firstBin;                      // first bin
//} TABLE;
//int HashFunction(const char *key, size_t bins) {
//    return((int)(strlen(key) % bins));
//}
//NODE *BuildTree(NODE *pNode, char *str, BIN *bin) {
//    if (pNode == NULL)                               // string not found
//    {
//        size_t length = strlen(str) + NUM0NE;        // length of string
//
//        pNode = (NODE *)SafeMalloc(sizeof(NODE));    // allocate a node
//        pNode->strng = (char *)SafeMalloc(length);
//        memcpy(pNode->strng, str, length);           // copy string
//        pNode->count = NUM0NE;                       // 1st occurrence
//        pNode->left = pNode->right = NULL;           // no subtrees
//        bin->nodes++;
//    }
//    else
//    {
//        int result = strcmp(str, pNode->strng);      // compare strings
//        if (result == NUMZER0)                       // new string == current
//            ++pNode->count;                          // increment occurrence
//        else if (result < NUMZER0)                   // new string < current
//            pNode->left = BuildTree(pNode->left, str, bin);
//        else
//            pNode->right = BuildTree(pNode->right, str, bin);
//    }
//    return(pNode);
//}
//// PrintTree recursively prints the binary tree in pNode alphabetically.
//void PrintTree(const NODE *pNode) {
//    if (pNode != NULL)
//    {
//        // go left
//        PrintTree(pNode->left);
//        printf("%4d  %s\n", (int)pNode->count, pNode->strng);
//        // go right
//        PrintTree(pNode->right);
//    }
//}
//// PrintTable prints the hash table.
//void PrintTable(const TABLE *hashTable) {
//    // visit bins
//    for (BIN *bin = hashTable->firstBin, *end = bin + hashTable->bins;
//        bin < end; ++bin)
//    {
//        printf("%zu entries for bin %d:\n",
//            bin->nodes, (int)(bin - hashTable->firstBin));
//        // visit nodes !!!
//        PrintTree(bin->firstNode);
//    }
//}
//// CreateTable creates and initializes the hash table and its bins.
//TABLE *CreateTable(size_t bins) {
//    TABLE *hashTable;
//    BIN *end;
//
//    hashTable = (TABLE *)SafeMalloc(sizeof(TABLE));   // alloc desc struct
//    hashTable->bins = bins;                           //how many bins
//    hashTable->firstBin = (BIN *)SafeMalloc(bins * sizeof(BIN));
//    end = hashTable->firstBin + bins;                 // end of bins
//
//    for (BIN *bin = hashTable->firstBin; bin < end; ++bin)
//    {
//        bin->nodes = NUMZER0;                         // no list nodes
//        bin->firstNode = NULL;                        // no list
//    }
//    return(hashTable);
//}
//// FreeTree recursively frees the binary tree in pNode.
//void FreeTree(NODE *pNode) {
//    if (pNode != NULL)
//    {
//        // free all
//        FreeTree(pNode->left);
//        FreeTree(pNode->right);
//        free(pNode->strng);
//        free(pNode);
//    }
//}
//// FreeTable frees the hash table.
//void FreeTable(TABLE *hashTable) {
//    // visit bins
//    for (BIN *bin = hashTable->firstBin, *end = bin + hashTable->bins;
//        bin < end; ++bin)
//    {
//        // visit nodes!!!
//        FreeTree(bin->firstNode);
//    }
//    free(hashTable->firstBin);
//    free(hashTable);
//}
//int main(int argc, char *argv[]) {
//    char buf[LINE_LEN];         // word string buffer
//    char fileName[LINE_LEN];    // file name buffer
//    int howManyBins;            // number of bins to create
//    TABLE *hashTable;           // pointer to hash table
//    FILE *fp;                   // open file pointer
//    // read file name from command line
//    if (argc < MIN_ARGS || sscanf(argv[FILE_ARG_IX], 
//        BUFFMT "s", fileName) != NUM0NE)
//    {
//        fprintf(stderr, "No file name specified on command line\n");
//        return EXIT_FAILURE;
//    }
//    fp = OpenFile(fileName);
//    // read bin count from command line
//    if (sscanf(argv[BINS_ARG_IX], "%d", &howManyBins) != NUM0NE)
//    {
//        fprintf(stderr, "No bin count specified on command line\n");
//        return EXIT_FAILURE;
//    }
//    // allocate table array
//    hashTable = CreateTable((size_t)howManyBins);
//    while (fscanf(fp, BUFFMT "s", buf) != EOF)
//    {
//        // find bin
//        BIN *bin = &hashTable->firstBin[HashFunction(buf, 
//            (size_t)howManyBins)];
//        NODE *root = BuildTree(bin->firstNode, buf, bin);
//        bin->firstNode = root;
//    }
//    fclose(fp);
//    PrintTable(hashTable);
//    FreeTable(hashTable);
//    return(EXIT_SUCCESS);
//}
