student: main.o addRecord.o deleteRecords.o saveRecords.o displayRecords.o countNodes.o reverseList.o sortRecords.o exit.o modifyRecords.o
	cc main.o addRecord.o deleteRecords.o saveRecords.o displayRecords.o countNodes.o reverseList.o sortRecords.o exit.o modifyRecords.o -o student
main.o:main.c
	cc -c main.c
addRecords.o:addRecord.c
	cc -c addRecord.c
deleteRecords.o:deleteRecords.c
	cc -c deleteRecords.c
saveRecords.o:saveRecords.c
	cc -c saveRecords.c
displayRecords.o:displayRecords.c
	cc -c displayRecords.c
countNodes.o:countNodes.c
	cc -c countNodes.c
reverseList.o:reverseList.c
	cc -c reverseList.c
sortRecords.o:sortRecords.c
	cc -c sortRecords.c
exit.o:exit.c
	cc -c exit.c
modifyRecords.o:modifyRecords.c
	cc -c modifyRecords.c
clear:
	@echo "clearing files"
	rm -v *.o student
	@echo "Files cleared"

