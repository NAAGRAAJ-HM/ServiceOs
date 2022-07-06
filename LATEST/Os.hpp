#pragma once
/******************************************************************************/
/* File   : Os.hpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgOs.hpp"
#include "Os_core.hpp"
#include "infOs_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Os:
      INTERFACES_EXPORTED_OS
   ,  public abstract_module
   ,  public class_Os_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, OS_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, OS_CONFIG_DATA, OS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, OS_CODE) DeInitFunction (void);
      FUNC(void, OS_CODE) MainFunction   (void);
      OS_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Os, OS_VAR) Os;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

