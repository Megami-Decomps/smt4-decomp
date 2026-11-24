#include "gfx/SecondaryResourceWork.h"
#include "ui/UiControl_Smt4a.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
void rt_memclr(void *, u32);
void __aeabi_memset4(void *, u32, s32);
void asdTMTexTableLoadTmx(u32, u32);
extern const char DAT_0052d3c4[]; /* event/PartnerTopic/PartnerTopic.mbm */
extern const char DAT_0052d398[]; /* event/PartnerTopic/PartnerTopicCommon.mbm */
extern const char DAT_0052d36c[]; /* event/PartnerTopic/PartnerTopicCommon.bf */
} /* extern "C" */

/* Loads the partner topic resources and starts the first dialog state. */
extern "C" void partnerTopicLoadResources(SecondaryResourceWork *dialog)
{
    dialog->filteredCount = 0;
    rt_memclr(dialog->filteredIds, sizeof(dialog->filteredIds));
    dialog->selected = 0;
    dialog->visibleRows = 0;
    dialog->selection = 0;
    dialog->value = 0;
    dialog->frame = 0;
    dialog->active = 0;
    dialog->pending = 0;
    asdLoadFileAsyncSimple(DAT_0052d3c4, (u32 *)&dialog->resourceData, 0);
    asdLoadFileAsyncSimple(DAT_0052d398, (u32 *)&dialog->scriptData, 0);
    asdLoadFileAsyncSimple(DAT_0052d36c, (u32 *)&dialog->textureData, 0);
    __aeabi_memset4(dialog->slots, sizeof(dialog->slots), -1);
    __aeabi_memset4(dialog->handles, sizeof(dialog->handles), -1);
    asdTMTexTableLoadTmx(49, 0);
    for (s32 i = 0; i < 2; ++i) {
        asdTMTexLoadMainHeap(49, i);
    }
    secondaryResourceCreateText(dialog);
    topicPanelInitAnimations(dialog);
    dialogEnterState((Dialog *)dialog, 1, 0);
}
