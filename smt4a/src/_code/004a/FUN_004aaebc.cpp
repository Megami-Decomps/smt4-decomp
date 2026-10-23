/* NON_MATCHING: request-format buffer frame size and fallback branch placement differ. */
#include "battle/btlUI.h"
#include "shard/W9_W9Match1_ResourceRequest.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
u32 resourceRequestRegisterOrUpdate(void *registry, const ResourceRequest *request);
void unitInitializeFromTemplate(u32 kind, void *scratch);
u32 randomGetUpperSixBits(const void *scratch, u32 index);

void FUN_004aaebc(u32, u32 kind, u32 parameter, u16 option, u16 variant, u16 flags, const ResourceRequestLabel *label, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    ResourceRequest request;
    u8 scratch[0x130];
    request.kind = (u16)kind;
    request.option = option;
    request.variant = variant;
    request.flags = flags;
    request.position[0] = x;
    request.position[1] = y;
    request.position[2] = z;
    request.parameter = parameter;
    if (label != NULL) {
        request.label = *label;
    } else {
        unitInitializeFromTemplate(kind, scratch);
        for (s32 index = 0; index < 8; ++index) {
            request.label.text[index] = (char)randomGetUpperSixBits(scratch, index & 0xff);
        }
    }
    resourceRequestRegisterOrUpdate(&ui->objC, &request);
}
}
