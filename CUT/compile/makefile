SRCDIR = ../src
OBJDIR = ../obj
BINDIR = ../bin
INCDIR = ../include
CFLAGS =  gcc -c -g -I ${INCDIR}

all:main.o menu.o dview.o rview.o donor.o donate1.o admin.o record.o menu_admin.o rdel.o ddel.o reg.o dupdate.o rupdate.o receiver.o rreg.o dreg.o search.o validate1.o finalexe
record.o:
	${CFLAGS} ${SRCDIR}/record.c -o  ${OBJDIR}/record.o

reg.o:
	${CFLAGS} ${SRCDIR}/registration.c -o  ${OBJDIR}/reg.o
main.o:
	${CFLAGS} ${SRCDIR}/main.c -o ${OBJDIR}/main.o
dreg.o:
	${CFLAGS} ${SRCDIR}/donor_reg.c -o ${OBJDIR}/dreg.o
dview.o:
	${CFLAGS} ${SRCDIR}/view_donors.c -o ${OBJDIR}/dview.o
rview.o:
	${CFLAGS} ${SRCDIR}/view_receiver.c -o ${OBJDIR}/rview.o
menu.o:
	${CFLAGS} ${SRCDIR}/menu.c -o ${OBJDIR}/menu.o
admin.o:
	${CFLAGS} ${SRCDIR}/admin.c -o ${OBJDIR}/admin.o
menu_admin.o:
	${CFLAGS} ${SRCDIR}/menu_admin.c -o ${OBJDIR}/menu_admin.o
rreg.o:
	${CFLAGS} ${SRCDIR}/receiver_reg.c -o ${OBJDIR}/rreg.o
donor.o:
	${CFLAGS} ${SRCDIR}/donor.c -o ${OBJDIR}/donor.o
donate1.o:
	${CFLAGS} ${SRCDIR}/donate.c -o ${OBJDIR}/donate1.o
ddel.o:
	${CFLAGS} ${SRCDIR}/del_donor.c -o  ${OBJDIR}/ddel.o
rdel.o:
	${CFLAGS} ${SRCDIR}/del_receiver.c -o ${OBJDIR}/rdel.o
dupdate.o:
	${CFLAGS} ${SRCDIR}/update_donor.c -o  ${OBJDIR}/dupdate.o
receiver.o:
	${CFLAGS} ${SRCDIR}/receiver.c -o ${OBJDIR}/receiver.o
rupdate.o:
	${CFLAGS} ${SRCDIR}/update_receiver.c -o ${OBJDIR}/rupdate.o
validate1.o:
	${CFLAGS} ${SRCDIR}/validate.c -o ${OBJDIR}/validate1.o
search.o:
	${CFLAGS} ${SRCDIR}/search.c -o ${OBJDIR}/search.o
finalexe:
	gcc ${OBJDIR}/main.o ${OBJDIR}/menu.o ${OBJDIR}/record.o ${OBJDIR}/admin.o ${OBJDIR}/menu_admin.o ${OBJDIR}/donate1.o ${OBJDIR}/donor.o ${OBJDIR}/reg.o ${OBJDIR}/dview.o ${OBJDIR}/rview.o ${OBJDIR}/rupdate.o ${OBJDIR}/search.o ${OBJDIR}/dupdate.o ${OBJDIR}/ddel.o ${OBJDIR}/rdel.o ${OBJDIR}/validate1.o ${OBJDIR}/dreg.o ${OBJDIR}/rreg.o ${OBJDIR}/receiver.o -o ${BINDIR}/main.exe










