//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t __do_global_dtors_aux(void);
int64_t __libc_csu_fini(void);
int64_t __libc_csu_init(int64_t a1, int64_t a2, int64_t a3);
int64_t _fini(void);
int64_t _init(void);
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t deregister_tm_clones(void);
int64_t frame_dummy(void);
int32_t function_7b0(char * s);
void function_7c0(void);
void function_7d0(struct _IO_FILE * stream, char * buf);
int32_t function_7e0(char * command);
int32_t function_7f0(char * format, ...);
int32_t function_800(int32_t fd, int64_t * buf, int32_t nbytes);
void function_810(int32_t seed);
int32_t function_820(int32_t * timer);
int32_t function_830(void);
void function_840(int64_t * d);
int64_t register_tm_clones(void);

// --------------------- Global Variables ---------------------

int64_t g1 = 2384; // 0x200d78
int64_t g2 = 2320; // 0x200d80
struct _IO_FILE * g3 = NULL; // 0x201020
struct _IO_FILE * g4 = NULL; // 0x201030
struct _IO_FILE * g5 = NULL; // 0x201040
char g6 = 0; // 0x201048
int32_t g7;

// ------------------------ Functions -------------------------

// Address range: 0x788 - 0x79f
int64_t _init(void) {
    int64_t result = 0; // 0x796
    if (*(int64_t *)0x200fe8 != 0) {
        // 0x798
        __gmon_start__();
        result = &g7;
    }
    // 0x79a
    return result;
}

// Address range: 0x7b0 - 0x7b6
int32_t function_7b0(char * s) {
    // 0x7b0
    return puts(s);
}

// Address range: 0x7c0 - 0x7c6
void function_7c0(void) {
    // 0x7c0
    __stack_chk_fail();
}

// Address range: 0x7d0 - 0x7d6
void function_7d0(struct _IO_FILE * stream, char * buf) {
    // 0x7d0
    setbuf(stream, buf);
}

// Address range: 0x7e0 - 0x7e6
int32_t function_7e0(char * command) {
    // 0x7e0
    return system(command);
}

// Address range: 0x7f0 - 0x7f6
int32_t function_7f0(char * format, ...) {
    // 0x7f0
    return printf(format);
}

// Address range: 0x800 - 0x806
int32_t function_800(int32_t fd, int64_t * buf, int32_t nbytes) {
    // 0x800
    return read(fd, buf, nbytes);
}

// Address range: 0x810 - 0x816
void function_810(int32_t seed) {
    // 0x810
    srand(seed);
}

// Address range: 0x820 - 0x826
int32_t function_820(int32_t * timer) {
    // 0x820
    return time(timer);
}

// Address range: 0x830 - 0x836
int32_t function_830(void) {
    // 0x830
    return rand();
}

// Address range: 0x840 - 0x846
void function_840(int64_t * d) {
    // 0x840
    __cxa_finalize(d);
}

// Address range: 0x850 - 0x87b
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x850
    int64_t v1; // 0x850
    __libc_start_main(2394, (int32_t)a4, (char **)&v1, (void (*)())2656, (void (*)())2768, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x880 - 0x8b2
int64_t deregister_tm_clones(void) {
    // 0x880
    return 0x201010;
}

// Address range: 0x8c0 - 0x902
int64_t register_tm_clones(void) {
    // 0x8c0
    return 0;
}

// Address range: 0x910 - 0x94a
int64_t __do_global_dtors_aux(void) {
    // 0x910
    if (g6 != 0) {
        // 0x948
        int64_t result; // 0x910
        return result;
    }
    // 0x919
    if (*(int64_t *)0x200ff8 != 0) {
        // 0x927
        __cxa_finalize((int64_t *)*(int64_t *)0x201008);
    }
    int64_t result2 = deregister_tm_clones(); // 0x933
    g6 = 1;
    return result2;
}

// Address range: 0x950 - 0x95a
int64_t frame_dummy(void) {
    // 0x950
    return register_tm_clones();
}

// Address range: 0x95a - 0xa5c
int main(int argc, char ** argv) {
    int64_t v1 = __readfsqword(40); // 0x962
    setbuf(g4, NULL);
    setbuf(g3, NULL);
    setbuf(g5, NULL);
    srand(time(NULL) + 0x1234);
    int64_t v2 = 0x100000000 * (int64_t)rand() + (int64_t)rand(); // 0x9d9
    printf("Do you know how 0x%llx stored in memory?\n", v2);
    int64_t buf = 0; // bp-32, 0x9f5
    read(0, &buf, 8);
    if (v2 == buf) {
        // 0xa1d
        puts("Good job!");
        system("/bin/sh");
    }
    // 0xa35
    puts("You are wrong!");
    int64_t result = 0; // 0xa53
    if (v1 != __readfsqword(40)) {
        // 0xa55
        __stack_chk_fail();
        result = &g7;
    }
    // 0xa5a
    return result;
}

// Address range: 0xa60 - 0xac5
int64_t __libc_csu_init(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = _init(); // 0xa8c
    if ((int64_t)&g2 - (int64_t)&g1 >> 3 == 0) {
        // 0xab6
        return result;
    }
    int64_t v1 = 0; // 0xa94
    while (v1 + 1 != (int64_t)&g2 - (int64_t)&g1 >> 3) {
        // 0xaa0
        v1++;
    }
    // 0xab6
    return result;
}

// Address range: 0xad0 - 0xad2
int64_t __libc_csu_fini(void) {
    // 0xad0
    int64_t result; // 0xad0
    return result;
}

// Address range: 0xad4 - 0xadd
int64_t _fini(void) {
    // 0xad4
    int64_t result; // 0xad4
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// void __cxa_finalize(void * d);
// void __gmon_start__(void);
// int __libc_start_main(int *(main)(int, char **, char **), int argc, char ** ubp_av, void(* init)(void), void(* fini)(void), void(* rtld_fini)(void), void(* stack_end));
// void __stack_chk_fail(void);
// int printf(const char * restrict format, ...);
// int puts(const char * s);
// int rand(void);
// ssize_t read(int fd, void * buf, size_t nbytes);
// void setbuf(FILE * restrict stream, char * restrict buf);
// void srand(unsigned int seed);
// int system(const char * command);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 20
