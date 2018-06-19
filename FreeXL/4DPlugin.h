/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : FreeXL
 #	author : miyako
 #	2016/08/09
 #
 # --------------------------------------------------------------------------------*/

#include "freexl.h"

#include <mutex>

// --- FreeXL
void FreeXL_Get_worksheet_name(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Get_info(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Close(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Open_info(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Open(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Set_active_worksheet(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Get_active_worksheet(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Worksheet_dimensions(sLONG_PTR *pResult, PackagePtr pParams);
void FreeXL_Get_cell_value(sLONG_PTR *pResult, PackagePtr pParams);
