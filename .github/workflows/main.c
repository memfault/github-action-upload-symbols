// Stub main to generate a tiny, valid symbol file for testing upload.
// To generate the symbol file, run:
//
// clang --target=arm-none-eabi -nostdlib -Os -g1 -Wl,--entry=main,--build-id main.c -o test.elf
//
// NOTE: the above command uses "-g1" to omit macros from the .debug_str
// sections. "-g3" is always preferred for real world use cases.

#include <stdint.h>

// This is a dummy build ID symbol set to "GNU Build ID" type.
__attribute__((used)) const uint8_t g_memfault_build_id[3] = {0x2};

// Junk so we can force a new build id
__attribute__((used)) const char timedata[] = __TIME__;
__attribute__((used)) const char date[] = __DATE__;

int main() {
    return 0;
}
