#include "battle/BtlUiGlobal.h"
#include "shard/W9_W9Match1_ResourceRequest.h"

extern "C" {
u32 resourceRequestRegisterOrUpdate(void *registry, const ResourceRequest *request);
void unitInitializeFromTemplate(u32 kind, void *scratch);
u32 randomGetUpperSixBits(const void *scratch, u32 index);

/* Registers a resource request for `kind` at the given position, labelled with `label` or, without
 * one, with eight characters derived from the kind's template. Returns the request's handle. */
u32 FUN_004aaebc(BtlUiA *, u32 kind, u32 parameter, u16 option, u16 variant, u32 flags, const ResourceRequestLabel *label, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    RegisteredResourceRequest registered;
    u8 scratch[0x130];
    registered.request.kind = (u16)kind;
    registered.request.position[0] = x;
    registered.request.position[1] = y;
    registered.request.position[2] = z;
    registered.request.parameter = parameter;
    registered.request.variant = variant;
    registered.request.option = option;
    registered.request.flags = flags;
    if (label == NULL) {
        unitInitializeFromTemplate(kind, scratch);
        for (s32 index = 0; index < 8; ++index) {
            registered.request.label.text[index] = (char)randomGetUpperSixBits(scratch, index & 0xff);
        }
    } else {
        registered.request.label = *label;
    }
    return resourceRequestRegisterOrUpdate(&ui->objC, &registered.request);
}
}
