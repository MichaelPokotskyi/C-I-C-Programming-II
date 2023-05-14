////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/10/2023
//// C2A7E1_main.c
//// Win10
//// Visual C++ 2022, ISO C17
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define LINE_LEN 256                // size of input buffer
//#define BUFFMT "%255"               // field width for input buffer scan
//
//void* SafeMalloc(size_t size)
//{
//    void* vp;
//
//    if ((vp = malloc(size)) == NULL)
//    {
//        fputs("Out of memory\n", stderr);
//        exit(EXIT_FAILURE);
//    }
//    return(vp);
//}
//
//FILE* OpenFile(const char* fileName)
//{
//    FILE* fp;
//
//    if ((fp = fopen(fileName, "r")) == NULL)
//    {
//        fprintf(stderr, "File \"%s\" didn't open.\n", fileName);
//        perror(fileName);
//        exit(EXIT_FAILURE);
//    }
//    return fp;
//}
//
//#define MIN_ARGS 2                  // fewest command line arguments
//#define FILE_ARG_IX 1               // index of file name argument
//#define BINS_ARG_IX 2                  // index of bin count argument
//
//typedef struct Node NODE;
//struct Node
//{
//    char* strng;                     // points to string this node represents
//    size_t count;                    // number of occurrences of this string
//    NODE* left, *right;              // pointers to left and right children
//};
//
//typedef struct                         // type of table array elements
//{
//    size_t nodes;                       // # of list nodes for this bin
//    NODE* firstNode;                    // 1st node in this bin's list
//} BIN;
//
//typedef struct                         // type of hash table descriptor
//{
//    size_t bins;                        // bins in hash table
//    BIN* firstBin;                      // first bin
//} TABLE;
//
//int HashFunction(const char* key, size_t bins)  // get bin value from key
//{
//    return((int)(strlen(key) % bins));           // value is length % bins
//}
//
////
//// BuildTree will search the binary tree at pNode for a node representing the
//// string in str.  If found, its string count will be incremented.  If not
//// found, a new node for that string will be created, put in alphabetical order,
//// and its count set to 1.  A pointer to the node for string str is returned.
////
//NODE* BuildTree(NODE* pNode, char* str, BIN *bin)
//{
//    if (pNode == NULL)                                 // string not found
//    {
//        size_t length = strlen(str) + 1;                // length of string
//
//        pNode = SafeMalloc(sizeof(NODE));               // allocate a node
//        pNode->strng = SafeMalloc(length);
//        memcpy(pNode->strng, str, length);              // copy string
//        pNode->count = 1;                               // 1st occurrence
//        pNode->left = pNode->right = NULL;              // no subtrees
//        bin->nodes++;
//    }
//    else
//    {
//        int result = strcmp(str, pNode->strng);         // compare strings
//
//        if (result == 0)                                // new string == current
//            ++pNode->count;                              // increment occurrence
//        else if (result < 0)                            // new string < current
//            pNode->left = BuildTree(pNode->left, str, bin);   // traverse left
//        else                                            // new string > current
//            pNode->right = BuildTree(pNode->right, str, bin); // traverse right
//    }
//    return(pNode);
//}
//// PrintTree recursively prints the binary tree in pNode alphabetically.
//void PrintTree(const NODE* pNode)
//{
//    if (pNode != NULL)                                 // if child exists
//    {
//        PrintTree(pNode->left);                         // traverse left
//        printf("%4zu  %s\n", pNode->count, pNode->strng);
//        PrintTree(pNode->right);                        // traverse right
//    }
//} 
//
//// PrintTable prints the hash table.
//void PrintTable(const TABLE* hashTable)
//{
//    BIN* bin, *end;
//    end = hashTable->firstBin + hashTable->bins;       // end of bins
//
//    for (bin = hashTable->firstBin; bin < end; ++bin)  // visit bins
//    {
//        NODE* node;
//        printf("%zu entries for bin %d:\n", bin->nodes, (int)(bin - hashTable->firstBin));
//        // Visit nodes
//        for (node = bin->firstNode; node != NULL; node++)
//        {
//            PrintTree(node);
//        }
//    }
//}
//
//// CreateTable creates and initializes the hash table and its bins
//TABLE* CreateTable(size_t bins)
//{
//    TABLE* hashTable;
//    BIN* bin, * end;
//
//    hashTable = SafeMalloc(sizeof(TABLE));             // alloc desc struct
//    hashTable->bins = bins;                            // how many bins
//    // alloc bins
//    hashTable->firstBin = SafeMalloc(bins * sizeof(BIN));
//    end = hashTable->firstBin + bins;                  // end of bins
//
//    for (bin = hashTable->firstBin; bin < end; ++bin)  // initialize bins
//    {
//        bin->nodes = 0;                                 // no list nodes
//        bin->firstNode = NULL;                          // no list
//    }
//    return(hashTable);
//}
//// MMM
//
//// FreeTree recursively frees the binary tree in pNode.
//void FreeTree(NODE* pNode)
//{
//    if (pNode != NULL)                                 // if child exists
//    {
//        FreeTree(pNode->left);                          // traverse left
//        FreeTree(pNode->right);                         // traverse right
//        free(pNode->strng);                             // free the string 
//        free(pNode);                                    // free the node 
//    }
//}
//
//// FreeTable frees the hash table.
//void FreeTable(TABLE* hashTable)
//{
//    BIN* bin, * end;
//
//    end = hashTable->firstBin + hashTable->bins;       // end of bins
//    for (bin = hashTable->firstBin; bin < end; ++bin)  // visit bins
//    {
//        NODE* node;
//        for (node = bin->firstNode; node != NULL;)      // visit nodes
//        {
//            NODE* pNode = node;                          // save NODE pointer
//            // FreeTree(pNode);                             // free the node
//            if (pNode != NULL)                                 // if child exists
//            {
//                FreeTree(pNode->left);                          // traverse left
//                FreeTree(pNode->right);                         // traverse right
//                free(pNode->strng);                             // free the string 
//                free(pNode);                                    // free the node 
//            }
//        }
//    }
//    free(hashTable->firstBin);                         // free all bins
//    free(hashTable);                                   // free table descriptor
//}
//
//int main(int argc, char* argv[])
//{
//    char buf[LINE_LEN];                                // word string buffer
//    char fileName[LINE_LEN];                           // file name buffer
//    NODE* root = NULL;                                 // pointer to root node
//    FILE* fp;
//    int howManyBins; // MMM
//    TABLE* hashTable; // MMM
//    
//
//    // Read file name from command line.
//    if (argc < MIN_ARGS || sscanf(argv[FILE_ARG_IX], BUFFMT "s", fileName) != 1)
//    {
//        fprintf(stderr, "No file name specified on command line\n");
//        return EXIT_FAILURE;
//    }
//    // Read bin count from command line.
//    if (sscanf(argv[BINS_ARG_IX], "%d", &howManyBins) != 1)
//    {
//        fprintf(stderr, "No bin count specified on command line\n");
//        return EXIT_FAILURE;
//    }
//    hashTable = CreateTable((size_t)howManyBins);   // allocate table array // MMM
//    fp = OpenFile(fileName);
//
//    while (fscanf(fp, BUFFMT "s", buf) != EOF)      // get string from file
//    {
//        // Find appropriate bin.
//        BIN* bin = &hashTable->firstBin[HashFunction(buf, (size_t)howManyBins)];
//        //BuildList(bin, buf);                         // put string in list
//        root = BuildTree(root, buf, bin);
//    }
//    fclose(fp);
//    //PrintTree(root); // for testing
//    PrintTable(hashTable);
//    FreeTable(hashTable);
//    return(EXIT_SUCCESS);
//}