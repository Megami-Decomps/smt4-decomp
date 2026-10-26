#include "shard/W6_W6Match5_QueuedRequest.h"

/* An active request of kind 1 with the default result. */
RequestParameters::RequestParameters() : kind(1), word3(0), word4(0) { result = WindowStatusResult(0); }
