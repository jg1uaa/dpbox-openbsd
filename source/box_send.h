/* Header for module box_send, generated by p2c */
#ifndef BOX_SEND_H
#define BOX_SEND_H

#include "pastrix.h"
#include "boxglobl.h"

extern short box_s_chan(short unr);
extern void send_text3(short unr, boolean first, char *eingabe,
		       boolean return_);
extern void enter_lifetime(short unr, char *eingabe);
extern void box_txt2(boolean first, short unr, char *betreff1);
extern void send_check(short unr, char *eingabe, boolean is_user,
		       char msgtype);
extern void send_file0(short unr, boolean in_send, char *fname);
extern boolean send_file1(short unr, short *kanal, boolean in_send,
			  short force_bin);
extern void send_sysmsg(char *tocall, char *tobbs, char *betreff, char *msg,
			short lt, char msgtype, short binmsg);

#endif /*BOX_SEND_H*/

