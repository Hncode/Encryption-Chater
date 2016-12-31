/*
 * Function: error status print function and log print 
 * Author: Nil
 * Modify at: 24/12/2016 20:39
 */

#ifndef _LOG_H__
#define _LOG_H__

extern int log_to_stderr;

void    err_dump(const char *, ...);        
void    err_msg(const char *, ...);
void    err_quit(const char *, ...);
void    err_exit(int, const char *, ...);
void    err_ret(const char *, ...);
void    err_sys(const char *, ...);

void log_open(const char *ident, int option, int facility); //Initialize syslog(), if running as daemon.
void log_ret(const char *fmt, ...);     //Nonfatal error related to a system call.
void log_sys(const char *fmt, ...);     //Fatal error related to a system call.
void log_msg(const char *fmt, ...);     //Nonfatal error unrelated to a system call.
void log_quit(const char *fmt, ...);    //Fatal error unrelated to a system call.

#endif //_LOG_H__
