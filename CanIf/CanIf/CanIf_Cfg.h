/*
* Configuration of module: CanIf (CanIf_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       2.0.6
*
* Generated by Arctic Studio (http://arccore.com) 
*/

#ifndef CANIF_CFG_H_
#define CANIF_CFG_H_


#if (!(CANIF_SW_MAJOR_VERSION == 1) && (CANIF_SW_MINOR_VERSION == 3))
#error CanIf: Configuration file expected BSW module version to be 1.3.*
#endif



#include "Can_Driver/Can.h"


#define CANIF_VERSION_INFO_API              (STD_ON)
#define CANIF_DEV_ERROR_DETECT			    /*(STD_OFF) */ (STD_ON)
#define CanIfPublicPnSupport                (STD_OFF)
#define CANIF_DLC_CHECK                     (STD_ON)
#define CANIF_ARC_RUNTIME_PDU_CONFIGURATION	(STD_OFF)
#define CANIF_MULITPLE_DRIVER_SUPPORT       (STD_OFF)  /*Not supported */
#define CANIF_READRXPDU_DATA_API			(STD_OFF)  /* Not supported */
#define CANIF_READRXPDU_NOTIFY_STATUS_API	(STD_OFF)  /* Not supported */
#define CANIF_READTXPDU_NOTIFY_STATUS_API	(STD_OFF)  /* Not supported */
#define CANIF_SETDYNAMICTXID_API            (STD_OFF)  /* Not supported */
#define CANIF_WAKEUP_EVENT_API			    (STD_OFF)  /* Not supported */
#define CANIF_TRANSCEIVER_API               (STD_OFF)  /* Not supported */
#define CANIF_TRANSMIT_CANCELLATION         (STD_OFF)  /* Not supported */

#define CANIF_CANPDUID_READDATA_API         (STD_OFF)
#define CANIF_READRXPDU_NOTIF_STATUS_API    (STD_OFF)

#define CANIF_UNIT_TESTING                  (STD_ON)
#define CanIfSetBaudrateApi 				(STD_OFF)
#define CANIF_PUBLIC_PN_SUPPORT             (STD_OFF)
#define CANIF_WAKEUP_CHECK_VALIDATION_API   (STD_OFF)

#define CANIF_PDU_ID_RX_PDU		0
#define CANIF_PDU_ID_FreqReq		1

#define CANIF_PDU_ID_TX_PDU		0
#define CANIF_PDU_ID_FreqInd		1
#define BUFFER_MAX 10

/* Identifiers for the elements in CanIfControllerConfig[] */
/* This is the ConfigurationIndex in CanIf_InitController() */
/*
 * Private configuration container Edit
 *
 */
#define CANIF_SOFTWARE_FILTER_TYPE        (CANIF_SOFTFILTER_TYPE_MASK)

typedef enum {
	CANIF_Channel_1_CONFIG_0,
	CANIF_CHANNEL_CONFIGURATION_CNT
} CanIf_Arc_ConfigurationIndexType;

typedef enum {
	CANIF_Channel_1,
	CANIF_CHANNEL_CNT
} CanIf_Arc_ChannelIdType;

#define CANIF_CONTROLLER_ID_Controller_1	(CANIF_Channel_1)


/* #include "CanIf_ConfigTypes.h" This inclusion is moved to CanIf.h */

/* extern CanIf_ConfigType CanIf_Config;  This declaration is moved to CanIf.h */


#endif

