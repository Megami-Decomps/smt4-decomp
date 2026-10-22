/* NON_MATCHING: assigned unit contains an unused dispatch-table literal after the deleting tail call. */
#include "common.h"
struct WindowState {const void *vtable;};
struct AocMain {u8 unk00[136];u8 windowState;};
extern "C" {
extern AocMain *g_aocMain;
void FUN_001b3428(void *state);void asdOperatorDelete(void *object);
/* Restores dispatch, releases the global window state and deletes the object. */
void FUN_004736c0(WindowState *window,const void *vtable){window->vtable=vtable;FUN_001b3428(&g_aocMain->windowState);asdOperatorDelete(window);}
}
