//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A4E3_pointerArray4D.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E3 (C)
// 4D array definition using multidimentional syntax

// Array dimensions
extern const int DIM0 = 2, DIM1 = 3, DIM2 = 4, DIM3 = 5;
// total = 120, or 6 X 20 elements (6 rows * 4 arrays of 5 elements each)
static float wa[DIM3], wb[DIM3], wc[DIM3], wd[DIM3],
we[DIM3], wf[DIM3], wg[DIM3], wh[DIM3],
wi[DIM3], wj[DIM3], wk[DIM3], wl[DIM3], 
wm[DIM3], wn[DIM3], wo[DIM3], wp[DIM3], 
wq[DIM3], wr[DIM3], ws[DIM3], wt[DIM3],
wu[DIM3], wv[DIM3], ww[DIM3], wx[DIM3];
// next level organizing pointer arrays
static float *xa[DIM2] = {wa, wb, wc, wd}, 
*xb[DIM2] = {we, wf, wg, wh},
*xc[DIM2] = {wi, wj, wk, wl},
*xd[DIM2] = {wm, wn, wo, wp},
*xe[DIM2] = {wq, wr, ws, wt},
*xf[DIM2] = {wu, wv, ww, wx};
// next level pointer of pointers arrays
static float **ya[DIM1] = {xa, xb, xc}, **yb[DIM1] = {xd, xe, xf};
// next level pointer of pointers of pointers arrays
extern float ***pointerArray4D[DIM0] = {ya, yb};
