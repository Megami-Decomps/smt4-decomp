#ifndef CLASSES_CALLBACKCONTROLLERFLAGS_H
#define CLASSES_CALLBACKCONTROLLERFLAGS_H

#include "common.h"

/* The flag byte every callback controller starts with. */
struct CallbackControllerFlags {
    CallbackControllerFlags() : flags(0) {}
    u8 flags;
};

#endif
