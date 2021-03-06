//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5d0(void);
int32_t function_600(char *s);
int64_t *function_610(int64_t *s, int32_t c, int32_t n);
int32_t function_620(int64_t *s1, int64_t *s2, int32_t n);
int32_t function_630(char *format, ...);
void function_640(int32_t status);
void function_650(int64_t *d);
int64_t function_690(void);
int64_t function_6d0(void);
int64_t function_720(void);
int64_t function_760(void);
int64_t main(void);
int64_t function_b00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_b70(void);
int64_t function_b74(void);

// --------------------- Global Variables ---------------------

int64_t g1 = 1888;               // 0x200d98
int64_t g2 = 1824;               // 0x200da0
int128_t g3;                     // 0x201010
int128_t g4;                     // 0x201020
int128_t g5;                     // 0x201030
int64_t g6 = 0x6a5f1e3e36355e6f; // 0x201040
int64_t g7;                      // 0x201051
int64_t g8 = -1;                 // 0xba0
int32_t g9;

// ------------------------ Functions -------------------------

// Address range: 0x5d0 - 0x5e7
int64_t function_5d0(void)
{
    int64_t result = 0; // 0x5de
    if (*(int64_t *)0x200fe8 != 0)
    {
        // 0x5e0
        __gmon_start__();
        result = &g9;
    }
    // 0x5e2
    return result;
}

// Address range: 0x600 - 0x606
int32_t function_600(char *s)
{
    // 0x600
    return puts(s);
}

// Address range: 0x610 - 0x616
int64_t *function_610(int64_t *s, int32_t c, int32_t n)
{
    // 0x610
    return memset(s, c, n);
}

// Address range: 0x620 - 0x626
int32_t function_620(int64_t *s1, int64_t *s2, int32_t n)
{
    // 0x620
    return memcmp(s1, s2, n);
}

// Address range: 0x630 - 0x636
int32_t function_630(char *format, ...)
{
    // 0x630
    return scanf(format);
}

// Address range: 0x640 - 0x646
void function_640(int32_t status)
{
    // 0x640
    exit(status);
}

// Address range: 0x650 - 0x656
void function_650(int64_t *d)
{
    // 0x650
    __cxa_finalize(d);
}

// Address range: 0x660 - 0x68b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4)
{
    // 0x660
    int64_t v1; // 0x660
    __libc_start_main(1898, (int32_t)a4, (char **)&v1, (void (*)())2816, (void (*)())2928, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x690 - 0x6c2
int64_t function_690(void)
{
    // 0x690
    return 0x201058;
}

// Address range: 0x6d0 - 0x712
int64_t function_6d0(void)
{
    // 0x6d0
    return 0;
}

// Address range: 0x720 - 0x75a
int64_t function_720(void)
{
    // 0x720
    if (*(char *)0x201051 != 0)
    {
        // 0x758
        int64_t result; // 0x720
        return result;
    }
    // 0x729
    if (*(int64_t *)0x200ff8 != 0)
    {
        // 0x737
        __cxa_finalize((int64_t *)*(int64_t *)0x201008);
    }
    int64_t result2 = function_690(); // 0x743
    *(char *)&g7 = 1;
    return result2;
}

// Address range: 0x760 - 0x76a
int64_t function_760(void)
{
    // 0x760
    return function_6d0();
}

// Address range: 0x76a - 0xafb
int64_t main(void)
{
    // 0x76a
    __readfsqword(40);
    int64_t v1; // bp-72, 0x76a
    memset(&v1, 0, 50);
    scanf("%32s", &v1);
    int128_t v2 = __asm_movsd(__asm_movsd_1(__asm_movsd(v1)));                           // 0x7de
    int64_t v3 = __asm_movaps(__asm_unpcklpd(v2, v2));                                   // 0x7ea
    char v4;                                                                             // 0x76a
    int128_t v5 = __asm_movsd(__asm_movsd_1(__asm_movsd((int64_t)v4)));                  // 0x821
    int64_t v6 = __asm_movaps(__asm_unpcklpd(v5, v5));                                   // 0x82d
    int64_t v7 = __asm_movaps(__asm_movapd(g3));                                         // 0x84d
    int64_t v8 = __asm_movaps(__asm_movapd(g4));                                         // 0x86d
    int64_t v9 = __asm_movaps(__asm_movapd((int128_t)v3));                               // 0x87c
    int64_t v10 = __asm_movaps(__asm_movapd((int128_t)v7));                              // 0x88b
    int64_t v11 = __asm_movaps(__asm_mulpd(__asm_movapd((int128_t)v9), (int128_t)v10));  // 0x8a2
    int64_t v12 = __asm_movaps(__asm_movapd((int128_t)v6));                              // 0x8b1
    int64_t v13 = __asm_movaps(__asm_movapd((int128_t)v8));                              // 0x8c0
    int64_t v14 = __asm_movaps(__asm_mulpd(__asm_movapd((int128_t)v12), (int128_t)v13)); // 0x8d7
    int64_t v15 = __asm_movaps(__asm_movapd((int128_t)v11));                             // 0x8e6
    int64_t v16 = __asm_movaps(__asm_movapd((int128_t)v14));                             // 0x8f5
    int64_t v17 = __asm_movaps(__asm_addpd(__asm_movapd((int128_t)v15), (int128_t)v16)); // 0x90c
    int64_t v18 = __asm_movaps(__asm_movapd(g5));                                        // 0x92c
    int64_t v19 = __asm_movaps(__asm_movapd((int128_t)v17));                             // 0x93b
    int64_t v20 = __asm_movaps(__asm_movapd((int128_t)v18));                             // 0x94a
    int128_t v21 = __asm_cmpeqpd(__asm_movapd((int128_t)v19), (int128_t)v20);            // 0x959
    int64_t v22 = __asm_movaps(v21);                                                     // 0x962
    int128_t v23 = __asm_pxor(v21, v21);                                                 // 0x969
    __asm_movsd_1(v23);
    __asm_movsd_1(__asm_pxor(v23, v23));
    int64_t v24 = __asm_movaps(__asm_movapd((int128_t)__asm_movaps(__asm_movapd((int128_t)v22)))); // 0x9ad
    int64_t str;                                                                                   // bp-216, 0x76a
    *(int128_t *)&str = (int128_t)v24;
    if (memcmp(&str, &g8, 16) != 0 || v4 == 89 != ((char)v1 == 48))
    {
        // 0x9df
        puts("Fail~");
        exit(0);
        // UNREACHABLE
    }
    int64_t v25 = __asm_movaps(__asm_movapd(*(int128_t *)&v1));                          // 0xa0b
    int64_t v26;                                                                         // bp-56, 0x76a
    int64_t v27 = __asm_movaps(__asm_movapd(*(int128_t *)&v26));                         // 0xa2c
    int64_t v28 = __asm_movaps(__asm_movapd((int128_t)v25));                             // 0xa3b
    int64_t v29 = __asm_movaps(__asm_movapd((int128_t)v27));                             // 0xa4a
    int64_t v30 = __asm_movaps(__asm_xorpd(__asm_movapd((int128_t)v28), (int128_t)v29)); // 0xa61
    int64_t str2;                                                                        // bp-200, 0x76a
    memset(&str2, 0, 128);
    int64_t v31 = __asm_movaps(__asm_movapd((int128_t)__asm_movaps(__asm_movapd((int128_t)v30)))); // 0xaad
    *(int128_t *)&str2 = (int128_t)v31;
    if (memcmp(&str2, &g6, 16) == 0)
    {
        // 0xae5
        puts("Right!");
        exit(0);
        // UNREACHABLE
    }
    // 0xacf
    puts("Fail~");
    exit(0);
    // UNREACHABLE
}

// Address range: 0xb00 - 0xb65
int64_t function_b00(int64_t a1, int64_t a2, int64_t a3)
{
    int64_t result = function_5d0(); // 0xb2c
    if ((int64_t)&g2 - (int64_t)&g1 >> 3 == 0)
    {
        // 0xb56
        return result;
    }
    int64_t v1 = 0; // 0xb34
    while (v1 + 1 != (int64_t)&g2 - (int64_t)&g1 >> 3)
    {
        // 0xb40
        v1++;
    }
    // 0xb56
    return result;
}

// Address range: 0xb70 - 0xb72
int64_t function_b70(void)
{
    // 0xb70
    int64_t result; // 0xb70
    return result;
}

// Address range: 0xb74 - 0xb7d
int64_t function_b74(void)
{
    // 0xb74
    int64_t result; // 0xb74
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// void __cxa_finalize(void * d);
// void __gmon_start__(void);
// int __libc_start_main(int *(main)(int, char **, char **), int argc, char ** ubp_av, void(* init)(void), void(* fini)(void), void(* rtld_fini)(void), void(* stack_end));
// void exit(int status);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int puts(const char * s);
// int scanf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 16
