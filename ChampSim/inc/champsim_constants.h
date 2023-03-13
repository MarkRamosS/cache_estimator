/***
 * THIS FILE IS AUTOMATICALLY GENERATED
 * Do not edit this file. It will be overwritten when the configure script is run.
 ***/

#ifndef CHAMPSIM_CONSTANTS_H
#define CHAMPSIM_CONSTANTS_H
#include "util.h"
#define BLOCK_SIZE 64ul
#define LOG2_BLOCK_SIZE lg2(BLOCK_SIZE)
#define PAGE_SIZE 4096ul
#define LOG2_PAGE_SIZE lg2(PAGE_SIZE)
#define STAT_PRINTING_PERIOD 10000000ul
#define NUM_CPUS 1ul
#define NUM_CACHES 7u
#define NUM_OPERABLES 10u
#define DRAM_IO_FREQ 3200ul
#define DRAM_CHANNELS 1ul
#define DRAM_RANKS 1ul
#define DRAM_BANKS 8ul
#define DRAM_ROWS 65536ul
#define DRAM_COLUMNS 128ul
#define DRAM_CHANNEL_WIDTH 8ul
#define DRAM_WQ_SIZE 64ul
#define DRAM_RQ_SIZE 64ul
#define tRP_DRAM_NANOSECONDS 12.5
#define tRCD_DRAM_NANOSECONDS 12.5
#define tCAS_DRAM_NANOSECONDS 12.5
#define DBUS_TURN_AROUND_NANOSECONDS 7.5
#endif
