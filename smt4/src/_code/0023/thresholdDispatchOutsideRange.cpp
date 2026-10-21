/* NON_MATCHING: compiler loads threshold floats separately instead of retail VLDM and changes unordered comparison branching. */
#include "common.h"
extern "C" {
struct ThresholdActions { f32 lower,upper; u8 below,above; };
typedef void (*ThresholdAction)(void);
extern ThresholdAction DAT_0040b890[];
extern ThresholdAction DAT_0040b89c[];
/* Dispatch the configured action when the value leaves the threshold interval. */
void thresholdDispatchOutsideRange(const ThresholdActions *actions,f32 value) { if (actions->lower>value) DAT_0040b890[actions->below](); else if (actions->upper<=value) DAT_0040b89c[actions->above](); }
}
