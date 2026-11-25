/* The applet library's sleep-query reply (CTR-SDK nn::applet::CTR::ReplySleepQuery), SMT IV. */
#ifndef SMT4_NN_APPLET_SLEEP_QUERY_H
#define SMT4_NN_APPLET_SLEEP_QUERY_H

#include "common.h"

extern "C" {

/* The answers to a sleep query (nn::applet::QueryReply). */
enum SleepQueryReply {
    SLEEP_QUERY_REPLY_REJECT = 0,
    SLEEP_QUERY_REPLY_ACCEPT = 1,
    SLEEP_QUERY_REPLY_LATER = 2
};

void appletSetSleepQueryState(u8 state); /* stores the sleep-query state byte */
void nn_applet_CTR_detail_ReplySleepQueryToManager(u32 reply);
u32 FUN_0013b9b0(u32 handle, u8 reply);
void nn_applet_CTR_ReplySleepQuery(s32 reply);

}

/* The body of nn_applet_CTR_ReplySleepQuery (smt4 0x1100cc), which the applet module inlines:
 * records the answer's state, then reports a reject or accept to the applet manager. */
static __inline void appletReplySleepQuery(s32 reply)
{
    if (reply == SLEEP_QUERY_REPLY_REJECT) {
        appletSetSleepQueryState(3);
    } else if (reply == SLEEP_QUERY_REPLY_ACCEPT) {
        appletSetSleepQueryState(2);
    } else {
        if (reply == SLEEP_QUERY_REPLY_LATER) {
            appletSetSleepQueryState(1);
        }
        return;
    }
    nn_applet_CTR_detail_ReplySleepQueryToManager(reply);
}

#endif
