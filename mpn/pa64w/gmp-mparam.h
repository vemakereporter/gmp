/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* These values were measured on a PA8500 using the system compiler version
   A.11.01.02.  Presumably the PA8000 and PA8200 have the same timing
   characteristic, but GCC might give somewhat different results.  */

/* Generated by tuneup.c, 2001-11-06, system compiler */

#define KARATSUBA_MUL_THRESHOLD       17
#define TOOM3_MUL_THRESHOLD           92

#define BASECASE_SQR_THRESHOLD         4
#define KARATSUBA_SQR_THRESHOLD       32
#define TOOM3_SQR_THRESHOLD          117

#define SB_PREINV_THRESHOLD            0
#define DC_THRESHOLD                  64
#define POWM_THRESHOLD               104

#define GCD_ACCEL_THRESHOLD            3
#define GCDEXT_THRESHOLD               0

#define DIVREM_1_NORM_THRESHOLD        0
#define DIVREM_1_UNNORM_THRESHOLD      0
#define MOD_1_NORM_THRESHOLD           0
#define MOD_1_UNNORM_THRESHOLD         0
#define USE_PREINV_MOD_1               1
#define DIVREM_2_THRESHOLD             0
#define DIVEXACT_1_THRESHOLD           0
#define MODEXACT_1_ODD_THRESHOLD       0

#define FFT_MUL_TABLE  { 496, 1056, 2368, 4352, 11264, 36864, 0 }
#define FFT_MODF_MUL_THRESHOLD       392
#define FFT_MUL_THRESHOLD           2432

#define FFT_SQR_TABLE  { 496, 1120, 2624, 4864, 11264, 28672, 0 }
#define FFT_MODF_SQR_THRESHOLD       376
#define FFT_SQR_THRESHOLD           2688
