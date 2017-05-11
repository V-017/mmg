/* =============================================================================
**  This file is part of the mmg software package for the tetrahedral
**  mesh modification.
**  Copyright (c) Bx INP/Inria/UBordeaux/UPMC, 2004- .
**
**  mmg is free software: you can redistribute it and/or modify it
**  under the terms of the GNU Lesser General Public License as published
**  by the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  mmg is distributed in the hope that it will be useful, but WITHOUT
**  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
**  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
**  License for more details.
**
**  You should have received a copy of the GNU Lesser General Public
**  License and of the GNU General Public License along with mmg (in
**  files COPYING.LESSER and COPYING). If not, see
**  <http://www.gnu.org/licenses/>. Please read their terms carefully and
**  use this copy of the mmg distribution only if you accept them.
** =============================================================================
*/

/**
 * \file mmg2d/libmmg2d_toolsf.c
 * \brief Fortran API functions for MMG2D library.
 * \author Charles Dapogny (UPMC)
 * \author Cécile Dobrzynski (Bx INP/Inria/UBordeaux)
 * \author Pascal Frey (UPMC)
 * \author Algiane Froehly (Inria/UBordeaux)
 * \version 5
 * \date 01 2014
 * \copyright GNU Lesser General Public License.
 * \note Please, refer to the \a mmgs/libmmgs.h file for functions
 * documentation.
 *
 * Define the private Fortran API functions for MMG2D library
 * (incompatible functions with the main binary): adds function
 * definitions with upcase, underscore and double underscore to match
 * any fortran compiler.
 *
 */

#include "mmg2d.h"

/**
 * See \ref MMG2D_setfunc function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_SETFUNC,mmg2d_setfunc,
             (MMG5_pMesh *mesh,MMG5_pSol *met),
             (mesh,met)) {
  MMG2D_setfunc(*mesh,*met);
  return;
}


/**
 * See \ref MMG2D_Get_adjaTri function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_GET_ADJATRI,mmg2d_get_adjatri,
             (MMG5_pMesh *mesh,int* kel, int* listri, int* retval),
             (mesh,kel,listri,retval)) {
  *retval =  MMG2D_Get_adjaTri(*mesh,*kel,listri);
  return;
}

/**
 * See \ref MMG2D_Get_adjaVertices function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_GET_ADJAVERTICES,mmg2d_get_adjavertices,
             (MMG5_pMesh *mesh,int* ip, int* lispoi, int* retval),
             (mesh,ip,lispoi,retval)) {
  *retval =  MMG2D_Get_adjaVertices(*mesh, *ip,lispoi);
  return;
}

/**
 * See \ref MMG2D_Get_adjaVerticesFast function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_GET_ADJAVERTICESFAST,mmg2d_get_adjaverticesfast,
             (MMG5_pMesh *mesh,int* ip, int *start, int* lispoi, int* retval),
             (mesh,ip,start,lispoi,retval)) {
  *retval =  MMG2D_Get_adjaVerticesFast(*mesh,*ip, *start,lispoi);
  return;
}

/**
 * See \ref MMG2D_Get_triFromEdge function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_GET_TRIFROMEDGE,mmg2d_get_trifromedge,
             (MMG5_pMesh *mesh,int *ked, int *ktri, int *ied,int *retval),
             (mesh,ked,ktri,ied,retval)) {

  *retval = MMG2D_Get_triFromEdge(*mesh,*ked,ktri,ied);
  return;
}
/**
 * See \ref MMG2D_Reset_verticestags function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_RESET_VERTICESTAGS,mmg2d_reset_verticestags,
             (MMG5_pMesh *mesh),(mesh)) {

  MMG2D_Reset_verticestags(*mesh);

  return;
}

/**
 * See \ref MMG2D_Free_Triangles function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_FREE_TRIANGLES,mmg2d_free_triangles,
             (MMG5_pMesh *mesh),(mesh)) {

  MMG2D_Free_triangles(*mesh);

  return;
}

/**
 * See \ref MMG2D_Free_Edges function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_FREE_EDGES,mmg2d_free_edges,
             (MMG5_pMesh *mesh),(mesh)) {

  MMG2D_Free_edges(*mesh);

  return;
}

/**
 * See \ref MMG2D_Free_Edges function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_FREE_SOLUTIONS,mmg2d_free_solutions,
             (MMG5_pMesh *mesh,MMG5_pSol *sol),(mesh,sol)) {

  MMG2D_Free_solutions(*mesh,*sol);

  return;
}

/**
 * See \ref MMG2D_DoSol function in \ref mmg2d/libmmg2d.h file.
 */
FORTRAN_NAME(MMG2D_DOSOL,mmg2d_dosol,
             (MMG5_pMesh *mesh,MMG5_pSol *met,int *retval),
             (mesh,met,retval)) {
  *retval = MMG2D_doSol(*mesh,*met);
  return;
}
