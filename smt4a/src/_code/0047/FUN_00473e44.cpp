/* NON_MATCHING: whole-parameter assignment uses one five-register LDM/STM and a larger saved frame; retail splits the first/final words from a three-word copy and merges flags with the first word. */
#include "addon/aocMain.h"

extern "C" {
void* jyoucyuGetTableEntry(u32 index);

// Queues parameters and their token unless a request is already pending.
u32 FUN_00473e44(AocMain *main, const RequestParameters* parameters, u32 token)
{
    if (!(main->flags & 8)) {
        main->request = *parameters;
        main->token = token;
        main->flags |= 9;
        jyoucyuGetTableEntry(0);
    }
    return 1;
}
}
