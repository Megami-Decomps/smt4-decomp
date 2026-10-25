#ifndef CLASSES_THREADED_TEXT_SCANNER_H
#define CLASSES_THREADED_TEXT_SCANNER_H

#include "classes/Obj420fa4.h"
#include "nn/os/Thread.h"
#include <stddef.h>

struct ThreadedTextScanner {
    ThreadedTextScanner() {}
    ~ThreadedTextScanner();

    /* 0x00 */ u32 unk00[2];
    /* 0x08 */ Obj420fa4 scanner;
    /* 0x3c */ NnOsThread thread;
};
typedef char ThreadedTextScannerLayoutCheck[
    sizeof(Obj420fa4) == 0x34 && sizeof(ThreadedTextScanner) == 0x44 &&
    offsetof(ThreadedTextScanner, scanner) == 8 &&
    offsetof(ThreadedTextScanner, thread) == 0x3c ? 1 : -1];

#endif
