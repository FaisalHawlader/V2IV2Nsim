//
//                           SimuLTE
//
// This file is part of a software released under the license included in file
// "license.pdf". This license can be also found at http://www.ltesimulator.com/
// The above file and the present reference are part of the software itself,
// and cannot be removed from it.
//

//
// This file has been modified for 5G-Sim-V2I/N
//

#ifndef _LTE_LTE_SCHEDULER_UE_UL_H_
#define _LTE_LTE_SCHEDULER_UE_UL_H_

#include "common/LteCommon.h"

class LteMacUe;
class LcgScheduler;

/**
 * LTE Ue uplink scheduler.
 */
class LteSchedulerUeUl
{
  protected:

    // MAC module, queried for parameters
    LteMacUe *mac_;

    // Schedule List
//    LteMacScheduleList scheduleList_;
    LteMacScheduleListWithSizes scheduleListWithSizes_;

    // Scheduled Bytes List
    LteMacScheduleList scheduledBytesList_;

    // Inner Scheduler - default to Standard LCG
    LcgScheduler* lcgScheduler_;

  public:

    /* Performs the standard LCG scheduling algorithm
     * @returns reference to scheduling list
     */

//    LteMacScheduleList* schedule();
    virtual LteMacScheduleListWithSizes* schedule();
	/* After the scheduling, returns the amount of bytes
	 * scheduled for each connection
	 */
	virtual LteMacScheduleList getScheduledBytesList();

    /*
     * constructor
     */
    LteSchedulerUeUl(LteMacUe * mac);
    /*
     * destructor
     */
    virtual ~LteSchedulerUeUl();
};

#endif // _LTE_LTE_SCHEDULER_UE_UL_H_
