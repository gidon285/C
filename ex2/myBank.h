/**
 * @file myBank.h
 * @author @gidon285 @ShmuelLaame
 * @brief myBank's main header file, defined all the banks functions
 * @version 1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 */
#ifndef myBank_h

#define myBank_h
    void init();
    void menu();
    void openAccount(); 
    double deposit();
    void depositTrans(int);
    void balance(int);
    void withdraw(int);
    void close(int);
    void interest();
    void printaccs();
#endif

