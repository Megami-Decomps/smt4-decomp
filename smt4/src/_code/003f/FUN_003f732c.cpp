#include "common.h"

struct ValueLink {
    ValueLink *next;
};

struct LinkedValue {
    /* 0x00 */ u32 value;
    /* 0x04 */ ValueLink head;
    /* 0x08 */ ValueLink *tail;
};

/* Clears the value and initializes the empty chain's two links. */
extern "C" void FUN_003f732c(LinkedValue *value)
{
    value->head.next = &value->head;
    value->value = 0;
    value->tail = &value->head;
}
