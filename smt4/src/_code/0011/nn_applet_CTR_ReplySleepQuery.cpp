#include "nn/applet/SleepQuery.h"

extern "C" {

/* nn::applet::CTR::ReplySleepQuery: answers the applet manager's sleep query. */
void nn_applet_CTR_ReplySleepQuery(s32 reply)
{
    appletReplySleepQuery(reply);
}

} /* extern "C" */
