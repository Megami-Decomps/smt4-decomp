/* NON_MATCHING: retail loads the process name and FUN_0035d080 after the topic is published (8 lines). A plain
 * `static` topicCreateProcess(name) helper shared with newHighwayInfoCreate gives IDENTICAL here (and 10 lines
 * there), but no out-of-line function with that body exists in retail and `static __inline` gives 25/29: the
 * plain-static form was chosen by score (wave 91 review), so both creators call asdProcessCreateSimple in place. */
#include "ui/PartnerTopic.h"
#include "shard/W5_W5Match7_ResourceHandles.h"
#include "code/Code0015_Smt4a.h"

extern "C" {

/* Creates the partner topic window: its state, the update process and the three draw tasks. */
void partnerTopicCreate(void)
{
    g_engineResourceHandles.secondary = new SecondaryResourceWork;
    SecondaryResourceWork *topic = (SecondaryResourceWork *)g_engineResourceHandles.secondary;
    topic->job = asdProcessCreateSimple((const s8 *)"PartnerTopic PROC", 4, 0, 0, FUN_0035d080, NULL, 0);
    taskCreateDraw((const s8 *)"PartnerTopic UL", 0x81, 0, 0, engineResourceSetSecondaryValue, NULL, 0, (void *)topic->job);
    taskCreateDraw((const s8 *)"PartnerTopic UR", 0xdd, 0, 0, engineResourceSetSecondaryValue, NULL, 0, (void *)topic->job);
    taskCreateDraw((const s8 *)"PartnerTopic DD", 0xeb, 0, 0, FUN_0037d994, NULL, 0, (void *)topic->job);
    partnerTopicLoadResources(topic);
}
} /* extern "C" */
