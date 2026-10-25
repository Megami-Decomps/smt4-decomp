#ifndef NN_APPLET_SLEEP_CALLBACK_H
#define NN_APPLET_SLEEP_CALLBACK_H

#include "common.h"
#include <stddef.h>

namespace nn {
namespace applet {
class SleepCallback {
public:
    SleepCallback();
    /* 0x00 */ SleepCallback* previous;
    /* 0x04 */ SleepCallback* next;
    /* 0x08 */ void (*notify)();
};
typedef char SleepCallbackLayoutCheck[
    sizeof(SleepCallback) == 0x0c && offsetof(SleepCallback, previous) == 0 &&
    offsetof(SleepCallback, next) == 4 && offsetof(SleepCallback, notify) == 8 ? 1 : -1];
}
}

#endif
