/************************************************************************
 * NASA Docket No. GSC-19,200-1, and identified as "cFS Draco"
 *
 * Copyright (c) 2023 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *  The Sample Lib header file containing version information
 */

#ifndef SAMPLE_LIB_VERSION_H
#define SAMPLE_LIB_VERSION_H

/* Development Build Macro Definitions */

#define SAMPLE_LIB_BUILD_NUMBER     0 /*!< Development Build: Number of commits since baseline */
#define SAMPLE_LIB_BUILD_BASELINE   "v7.0.0" /*!< Development Build: git tag that is the base for the current development */
#define SAMPLE_LIB_BUILD_DEV_CYCLE  "v7.0.0" /**< @brief Development: Release name for current development cycle */
#define SAMPLE_LIB_BUILD_CODENAME   "Draco" /**< @brief: Development: Code name for the current build */

/*
 * Version Macros, see \ref cfsversions for definitions.
 */
#define SAMPLE_LIB_MAJOR_VERSION 7  /*!< @brief Major version number */
#define SAMPLE_LIB_MINOR_VERSION 0  /*!< @brief Minor version number */
#define SAMPLE_LIB_REVISION      0  /*!< @brief Revision version number. Value of 0 indicates a development version.*/

/**
 * @brief Last official release.
 */
#define SAMPLE_LIB_LAST_OFFICIAL "v7.0.0"

/*!
 * @brief Mission revision.
 *
 * Set to 0 on OFFICIAL releases, and set to 255 (0xFF) on development versions.
 * Values 1-254 are reserved for mission use to denote patches/customizations as needed.
 */

/*!
 * @brief Mission revision.
 *
 * Reserved for mission use to denote patches/customizations as needed.
 * Values 1-254 are reserved for mission use to denote patches/customizations as needed. NOTE: Reserving 0 and 0xFF for
 * cFS open-source development use (pending resolution of nasa/cFS#440)
 */
#define SAMPLE_LIB_MISSION_REV 0x0

#define SAMPLE_LIB_STR_HELPER(x) #x /*!< @brief Helper function to concatenate strings from integer macros */
#define SAMPLE_LIB_STR(x) \
    SAMPLE_LIB_STR_HELPER(x) /*!< @brief Helper function to concatenate strings from integer macros */

/*! @brief Development Build Version Number.
 * @details Baseline git tag + Number of commits since baseline. @n
 * See @ref cfsversions for format differences between development and release versions.
 */
#define SAMPLE_LIB_VERSION SAMPLE_LIB_BUILD_BASELINE "+dev" SAMPLE_LIB_STR(SAMPLE_LIB_BUILD_NUMBER)

/**
 * @brief Max Version String length.
 * 
 * Maximum length that a sample_lib version string can be.
 * 
 */
#define SAMPLE_LIB_CFG_MAX_VERSION_STR_LEN 256

#endif /* SAMPLE_LIB_VERSION_H */

/************************/
/*  End of File Comment */
/************************/
