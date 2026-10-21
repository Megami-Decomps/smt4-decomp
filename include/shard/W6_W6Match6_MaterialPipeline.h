#ifndef SHARD_W6_W6MATCH6_MATERIALPIPELINE_H
#define SHARD_W6_W6MATCH6_MATERIALPIPELINE_H

struct MaterialPipelineInstance;
struct MaterialPipelineWriter;
struct MaterialPipelinePiece;
struct MaterialPipelineContext;

extern "C" void modelEmitMaterialPipelineCommands(MaterialPipelineInstance *, MaterialPipelineWriter *,
                              MaterialPipelinePiece *, MaterialPipelineContext *);

#endif
