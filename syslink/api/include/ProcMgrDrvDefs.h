/*
 * Syslink-IPC for TI OMAP Processors
 *
 * Copyright (C) 2009 Texas Instruments, Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 of the License.
 *
 * This program is distributed .as is. WITHOUT ANY WARRANTY of any kind,
 * whether express or implied; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

/*!
 *  @file       ProcMgrDrvDefs.h
 *
 *  @brief      Definitions of ProcMgrDrv types and structures.
 *
 */


#ifndef ProcMgrDrvDefs_H_0xf2ba
#define ProcMgrDrvDefs_H_0xf2ba


/* Standard headers */
#include <Std.h>

/* Module headers */
#include <ProcMgr.h>


#if defined (__cplusplus)
extern "C" {
#endif


/* =============================================================================
 *  Macros and types
 * =============================================================================
 */
/*!
 *  @brief  Base structure for ProcMgr command args. This needs to be the first
 *          field in all command args structures.
 */
typedef struct ProcMgr_CmdArgs_tag {
    Int                 apiStatus;
    /*!< Status of the API being called. */
} ProcMgr_CmdArgs;


/*  ----------------------------------------------------------------------------
 *  IOCTL command IDs for ProcMgr
 *  ----------------------------------------------------------------------------
 */
/*!
 *  @brief  Base command ID for ProcMgr
 */
#define PROCMGR_BASE_CMD                 0x100

/*!
 *  @brief  Command for ProcMgr_getConfig
 */
#define CMD_PROCMGR_GETCONFIG           (PROCMGR_BASE_CMD + 1u)

/*!
 *  @brief  Command for ProcMgr_setup
 */
#define CMD_PROCMGR_SETUP               (PROCMGR_BASE_CMD + 2u)

/*!
 *  @brief  Command for ProcMgr_setup
 */
#define CMD_PROCMGR_DESTROY             (PROCMGR_BASE_CMD + 3u)

/*!
 *  @brief  Command for ProcMgr_destroy
 */
#define CMD_PROCMGR_PARAMS_INIT         (PROCMGR_BASE_CMD + 4u)

/*!
 *  @brief  Command for ProcMgr_create
 */
#define CMD_PROCMGR_CREATE              (PROCMGR_BASE_CMD + 5u)

/*!
 *  @brief  Command for ProcMgr_delete
 */
#define CMD_PROCMGR_DELETE              (PROCMGR_BASE_CMD + 6u)

/*!
 *  @brief  Command for ProcMgr_open
 */
#define CMD_PROCMGR_OPEN                (PROCMGR_BASE_CMD + 7u)

/*!
 *  @brief  Command for ProcMgr_close
 */
#define CMD_PROCMGR_CLOSE               (PROCMGR_BASE_CMD + 8u)

/*!
 *  @brief  Command for ProcMgr_getAttachParams
 */
#define CMD_PROCMGR_GETATTACHPARAMS     (PROCMGR_BASE_CMD + 9u)

/*!
 *  @brief  Command for ProcMgr_attach
 */
#define CMD_PROCMGR_ATTACH              (PROCMGR_BASE_CMD + 10u)

/*!
 *  @brief  Command for ProcMgr_detach
 */
#define CMD_PROCMGR_DETACH              (PROCMGR_BASE_CMD + 11u)

/*!
 *  @brief  Command for ProcMgr_load
 */
#define CMD_PROCMGR_LOAD                (PROCMGR_BASE_CMD + 12u)

/*!
 *  @brief  Command for ProcMgr_unload
 */
#define CMD_PROCMGR_UNLOAD              (PROCMGR_BASE_CMD + 13u)

/*!
 *  @brief  Command for ProcMgr_getStartParams
 */
#define CMD_PROCMGR_GETSTARTPARAMS      (PROCMGR_BASE_CMD + 14u)

/*!
 *  @brief  Command for ProcMgr_start
 */
#define CMD_PROCMGR_START               (PROCMGR_BASE_CMD + 15u)

/*!
 *  @brief  Command for ProcMgr_stop
 */
#define CMD_PROCMGR_STOP                (PROCMGR_BASE_CMD + 16u)

/*!
 *  @brief  Command for ProcMgr_getState
 */
#define CMD_PROCMGR_GETSTATE            (PROCMGR_BASE_CMD + 17u)

/*!
 *  @brief  Command for ProcMgr_read
 */
#define CMD_PROCMGR_READ                (PROCMGR_BASE_CMD + 18u)

/*!
 *  @brief  Command for ProcMgr_write
 */
#define CMD_PROCMGR_WRITE               (PROCMGR_BASE_CMD + 19u)

/*!
 *  @brief  Command for ProcMgr_control
 */
#define CMD_PROCMGR_CONTROL             (PROCMGR_BASE_CMD + 20u)

/*!
 *  @brief  Command for ProcMgr_translateAddr
 */
#define CMD_PROCMGR_TRANSLATEADDR       (PROCMGR_BASE_CMD + 22u)

/*!
 *  @brief  Command for ProcMgr_getSymbolAddress
 */
#define CMD_PROCMGR_GETSYMBOLADDRESS    (PROCMGR_BASE_CMD + 23u)

/*!
 *  @brief  Command for ProcMgr_map
 */
#define CMD_PROCMGR_MAP                 (PROCMGR_BASE_CMD + 24u)

/*!
 *  @brief  Command for ProcMgr_registerNotify
 */
#define CMD_PROCMGR_REGISTERNOTIFY      (PROCMGR_BASE_CMD + 25u)

/*!
 *  @brief  Command for ProcMgr_getProcInfo
 */
#define CMD_PROCMGR_GETPROCINFO         (PROCMGR_BASE_CMD + 26u)
/*!
 *  @brief  Command for ProcMgr_unmap
 */
#define CMD_PROCMGR_UNMAP               (PROCMGR_BASE_CMD + 27u)

/*!
 * @brief   Command for ProcMgr_getVirtToPhysPages
 */
#define CMD_PROCMGR_GETVIRTTOPHYS       (PROCMGR_BASE_CMD + 28u)



/*  ----------------------------------------------------------------------------
 *  Command arguments for ProcMgr
 *  ----------------------------------------------------------------------------
 */
/*!
 *  @brief  Command arguments for ProcMgr_getConfig
 */
typedef struct ProcMgr_CmdArgsGetConfig_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    ProcMgr_Config *    cfg;
    /*!< Pointer to the ProcMgr module configuration structure in which the
         default config is to be returned. */
} ProcMgr_CmdArgsGetConfig;

/*!
 *  @brief  Command arguments for ProcMgr_setup
 */
typedef struct ProcMgr_CmdArgsSetup_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    ProcMgr_Config *    cfg;
    /*!< Optional ProcMgr module configuration. If provided as NULL, default
         configuration is used. */
} ProcMgr_CmdArgsSetup;

/*!
 *  @brief  Command arguments for ProcMgr_destroy
 */
typedef struct ProcMgr_CmdArgsDestroy_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
} ProcMgr_CmdArgsDestroy;

/*!
 *  @brief  Command arguments for ProcMgr_Params_init
 */
typedef struct ProcMgr_CmdArgsParamsInit_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object. */
    ProcMgr_Params *    params;
    /*!< Pointer to the ProcMgr instance params structure in which the default
         params is to be returned. */
} ProcMgr_CmdArgsParamsInit;

/*!
 *  @brief  Command arguments for ProcMgr_create
 */
typedef struct ProcMgr_CmdArgsCreate_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    UInt16              procId;
    /*!< Processor ID represented by this ProcMgr instance */
    ProcMgr_Params      params;
    /*!< ProcMgr instance configuration parameters. */
    Handle              handle;
    /*!< Handle to the created ProcMgr object */
} ProcMgr_CmdArgsCreate;

/*!
 *  @brief  Command arguments for ProcMgr_delete
 */
typedef struct ProcMgr_CmdArgsDelete_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Pointer to Handle to the ProcMgr object */
} ProcMgr_CmdArgsDelete;

/*!
 *  @brief  Command arguments for ProcMgr_open
 */
typedef struct ProcMgr_CmdArgsOpen_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    UInt16              procId;
    /*!< Processor ID represented by this ProcMgr instance */
    Handle              handle;
    /*!< Handle to the opened ProcMgr object. */
    ProcMgr_ProcInfo    procInfo;
    /*!< Processor information.  */
} ProcMgr_CmdArgsOpen;

/*!
 *  @brief  Command arguments for ProcMgr_close
 */
typedef struct ProcMgr_CmdArgsClose_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_ProcInfo    procInfo;
    /*!< Processor information.  */
} ProcMgr_CmdArgsClose;

/*!
 *  @brief  Command arguments for ProcMgr_getAttachParams
 */
typedef struct ProcMgr_CmdArgsGetAttachParams_tag {
    ProcMgr_CmdArgs         commonArgs;
    /*!< Common command args */
    Handle                  handle;
    /*!< Handle to the ProcMgr object. */
    ProcMgr_AttachParams *  params;
    /*!< Pointer to the ProcMgr attach params structure in which the default
         params is to be returned. */
} ProcMgr_CmdArgsGetAttachParams;

/*!
 *  @brief  Command arguments for ProcMgr_attach
 */
typedef struct ProcMgr_CmdArgsAttach_tag {
    ProcMgr_CmdArgs         commonArgs;
    /*!< Common command args */
    Handle                  handle;
    /*!< Handle to the ProcMgr object. */
    ProcMgr_AttachParams *  params;
    /*!< Optional ProcMgr attach parameters.  */
    ProcMgr_ProcInfo        procInfo;
    /*!< Processor information.  */
} ProcMgr_CmdArgsAttach;

/*!
 *  @brief  Command arguments for ProcMgr_detach
 */
typedef struct ProcMgr_CmdArgsDetach_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_ProcInfo    procInfo;
    /*!< Processor information.  */
} ProcMgr_CmdArgsDetach;

/*!
 *  @brief  Command arguments for ProcMgr_load
 */
typedef struct ProcMgr_CmdArgsLoad_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    String              imagePath;
    /*!< Full file path */
    UInt32              argc;
    /*!< Number of arguments */
    String *            argv;
    /*!< String array of arguments */
    Ptr                 params;
    /*!< Loader specific parameters */
    UInt32              fileId;
    /*!< Return parameter: ID of the loaded file */
} ProcMgr_CmdArgsLoad;

/*!
 *  @brief  Command arguments for ProcMgr_unload
 */
typedef struct ProcMgr_CmdArgsUnload_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              fileId;
    /*!< ID of the loaded file to be unloaded */
} ProcMgr_CmdArgsUnload;

/*!
 *  @brief  Command arguments for ProcMgr_getStartParams
 */
typedef struct ProcMgr_CmdArgsGetStartParams_tag {
    ProcMgr_CmdArgs         commonArgs;
    /*!< Common command args */
    Handle                  handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_StartParams *   params;
    /*!< Pointer to the ProcMgr start params structure in which the default
         params is to be returned. */
} ProcMgr_CmdArgsGetStartParams;

/*!
 *  @brief  Command arguments for ProcMgr_start
 */
typedef struct ProcMgr_CmdArgsStart_tag {
    ProcMgr_CmdArgs         commonArgs;
    /*!< Common command args */
    Handle                  handle;
    /*Entry point for the image*/
    UInt32                  entry_point;
    /*!< Handle to the ProcMgr object */
    ProcMgr_StartParams *   params;
    /*!< Optional ProcMgr start parameters. */
} ProcMgr_CmdArgsStart;

/*!
 *  @brief  Command arguments for ProcMgr_stop
 */
typedef struct ProcMgr_CmdArgsStop_tag {
    ProcMgr_CmdArgs         commonArgs;
    /*!< Common command args */
    Handle                  handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_StopParams *    params;
    /*!< Optional ProcMgr start parameters. */
} ProcMgr_CmdArgsStop;

/*!
 *  @brief  Command arguments for ProcMgr_getState
 */
typedef struct ProcMgr_CmdArgsGetState_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!<  Handle to the ProcMgr object */
    ProcMgr_State       procMgrState;
    /*!< Current state of the ProcMgr object. */
} ProcMgr_CmdArgsGetState;

/*!
 *  @brief  Command arguments for ProcMgr_read
 */
typedef struct ProcMgr_CmdArgsRead_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              procAddr;
    /*!< Address in space processor's address space of the memory region to
         read from. */
    UInt32              numBytes;
    /*!< IN/OUT parameter. As an IN-parameter, it takes in the number of bytes
         to be read. When the function returns, this parameter contains the
         number of bytes actually read. */
    Ptr                 buffer;
    /*!< User-provided buffer in which the slave processor's memory contents
         are to be copied. */
} ProcMgr_CmdArgsRead;

/*!
 *  @brief  Command arguments for ProcMgr_write
 */
typedef struct ProcMgr_CmdArgsWrite_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              procAddr;
    /*!< Address in space processor's address space of the memory region to
         write into. */
    UInt32              numBytes;
    /*!< IN/OUT parameter. As an IN-parameter, it takes in the number of bytes
         to be written. When the function returns, this parameter contains the
         number of bytes actually written. */
    Ptr                 buffer;
    /*!< User-provided buffer from which the data is to be written into the
         slave processor's memory. */
} ProcMgr_CmdArgsWrite;

/*!
 *  @brief  Command arguments for ProcMgr_control
 */
typedef struct ProcMgr_CmdArgsControl_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    Int32               cmd;
    /*!< Device specific processor command */
    Ptr                 arg;
    /*!< Arguments specific to the type of command. */
} ProcMgr_CmdArgsControl;

/*!
 *  @brief  Command arguments for ProcMgr_translateAddr
 */
typedef struct ProcMgr_CmdArgsTranslateAddr_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    Ptr                 dstAddr;
    /*!< Return parameter: Pointer to receive the translated address. */
    ProcMgr_AddrType    dstAddrType;
    /*!< Destination address type requested */
    Ptr                 srcAddr;
    /*!< Source address in the source address space */
    ProcMgr_AddrType    srcAddrType;
    /*!< Source address type */
} ProcMgr_CmdArgsTranslateAddr;

/*!
 *  @brief  Command arguments for ProcMgr_getSymbolAddress
 */
typedef struct ProcMgr_CmdArgsGetSymbolAddress_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              fileId;
    /*!< ID of the file received from the load function */
    String              symbolName;
    /*!< Name of the symbol */
    UInt32              symValue;
    /*!< Return parameter: Symbol address */
} ProcMgr_CmdArgsGetSymbolAddress;

/*!
 *  @brief  Command arguments for ProcMgr_map
 */
typedef struct ProcMgr_CmdArgsMap_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              procAddr;
    /*!< Slave address to be mapped */
    UInt32              size;
    /*!< Size (in bytes) of region to be mapped */
    UInt32              mappedAddr;
    /*!< Return parameter: Mapped address in host address space */
    UInt32              mappedSize;
    /*!< Return parameter: Mapped size */
    ProcMgr_MapType     type;
    /*!< Type of mapping. */
} ProcMgr_CmdArgsMap;

/*!
 *  @brief  Command arguments for ProcMgr_unmap
 */
typedef struct ProcMgr_CmdArgsUnMap_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              mappedAddr;
    /*!< Return parameter: Mapped address in host address space */
} ProcMgr_CmdArgsUnMap;

/*!
 *  @brief  Command arguments for ProcMgr_registerNotify
 */
typedef struct ProcMgr_CmdArgsRegisterNotify_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_CallbackFxn fxn;
    /*!< Handling function to be registered. */
    Ptr                 args;
    /*!< Optional arguments associated with the handler fxn. */
    ProcMgr_State       state[];
    /*!< Array of target states for which registration is required. */
} ProcMgr_CmdArgsRegisterNotify;

/*!
 *  @brief  Command arguments for ProcMgr_getProcInfo
 */
typedef struct ProcMgr_CmdArgsGetProcInfo_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    ProcMgr_ProcInfo *  procInfo;
    /*!< Pointer to the ProcInfo object to be populated. */
} ProcMgr_CmdArgsGetProcInfo;

/*!
 *  @brief  Command arguments for ProcMgr_virtToPhysPages
 */
typedef struct ProcMgr_CmdArgsVirtToPhysPages_tag {
    ProcMgr_CmdArgs     commonArgs;
    /*!< Common command args */
    Handle              handle;
    /*!< Handle to the ProcMgr object */
    UInt32              da;
    /*!< Remote Processor address. */
    UInt32 *            memEntries;
    /*!< translated mem entries buffer. */
    UInt32              numEntries;
    /*!<  number of entries to translate */
} ProcMgr_CmdArgsVirtToPhysPages;



#if defined (__cplusplus)
}
#endif /* defined (__cplusplus) */


#endif /* ProcMgrDrvDefs_H_0xf2ba */