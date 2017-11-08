#pragma once

#include <memory>

// Block data structures.
class CBlock;
class CBlockIndex;
class CNetAddr;

// Gridcoin
struct MiningCPID;
struct StructCPID;

class ThreadHandler;
typedef std::shared_ptr<ThreadHandler> ThreadHandlerPtr;

