#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Upper") {
  REQUIRE(upper(5) == "*****\n ****\n  ***\n   **\n    *\n");
  REQUIRE(upper(100) == "****************************************************************************************************\n ***************************************************************************************************\n  **************************************************************************************************\n   *************************************************************************************************\n    ************************************************************************************************\n     ***********************************************************************************************\n      **********************************************************************************************\n       *********************************************************************************************\n        ********************************************************************************************\n         *******************************************************************************************\n          ******************************************************************************************\n           *****************************************************************************************\n            ****************************************************************************************\n             ***************************************************************************************\n              **************************************************************************************\n               *************************************************************************************\n                ************************************************************************************\n                 ***********************************************************************************\n                  **********************************************************************************\n                   *********************************************************************************\n                    ********************************************************************************\n                     *******************************************************************************\n                      ******************************************************************************\n                       *****************************************************************************\n                        ****************************************************************************\n                         ***************************************************************************\n                          **************************************************************************\n                           *************************************************************************\n                            ************************************************************************\n                             ***********************************************************************\n                              **********************************************************************\n                               *********************************************************************\n                                ********************************************************************\n                                 *******************************************************************\n                                  ******************************************************************\n                                   *****************************************************************\n                                    ****************************************************************\n                                     ***************************************************************\n                                      **************************************************************\n                                       *************************************************************\n                                        ************************************************************\n                                         ***********************************************************\n                                          **********************************************************\n                                           *********************************************************\n                                            ********************************************************\n                                             *******************************************************\n                                              ******************************************************\n                                               *****************************************************\n                                                ****************************************************\n                                                 ***************************************************\n                                                  **************************************************\n                                                   *************************************************\n                                                    ************************************************\n                                                     ***********************************************\n                                                      **********************************************\n                                                       *********************************************\n                                                        ********************************************\n                                                         *******************************************\n                                                          ******************************************\n                                                           *****************************************\n                                                            ****************************************\n                                                             ***************************************\n                                                              **************************************\n                                                               *************************************\n                                                                ************************************\n                                                                 ***********************************\n                                                                  **********************************\n                                                                   *********************************\n                                                                    ********************************\n                                                                     *******************************\n                                                                      ******************************\n                                                                       *****************************\n                                                                        ****************************\n                                                                         ***************************\n                                                                          **************************\n                                                                           *************************\n                                                                            ************************\n                                                                             ***********************\n                                                                              **********************\n                                                                               *********************\n                                                                                ********************\n                                                                                 *******************\n                                                                                  ******************\n                                                                                   *****************\n                                                                                    ****************\n                                                                                     ***************\n                                                                                      **************\n                                                                                       *************\n                                                                                        ************\n                                                                                         ***********\n                                                                                          **********\n                                                                                           *********\n                                                                                            ********\n                                                                                             *******\n                                                                                              ******\n                                                                                               *****\n                                                                                                ****\n                                                                                                 ***\n                                                                                                  **\n                                                                                                   *\n");
}
