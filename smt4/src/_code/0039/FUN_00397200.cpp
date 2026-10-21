/* NON_MATCHING: retail packed state stores or parameter lifetime differs. */
#include "common.h"
struct ListNode { ListNode *previous; ListNode *next; ListNode *owner; };
struct CallbackState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ ListNode *head;
    /* 0x08 */ ListNode root;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ ListNode *tail;
    /* 0x1c */ u32 first;
    /* 0x20 */ u32 second;
};
extern "C" const u8 DAT_00422388[];
/* Initializes an empty self-linked callback list. */
extern "C" void FUN_00397200(CallbackState *state)
{
    state->vtable = DAT_00422388;
    state->head = &state->root;
    state->root.previous = &state->root;
    state->root.next = &state->root;
    state->root.owner = &state->root;
    state->active = 0;
    state->tail = &state->root;
    state->first = 0;
    state->second = 0;
}
