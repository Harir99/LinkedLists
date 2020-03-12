all: main

main: main.o  random_list.o rand_double.o print_list.o print_sorted_list.o print_sorted_list2.o addToBack.o sort1.o sort2.o replace_list.o
	gcc -Wall -o main  main.o random_list.o rand_double.o  print_list.o print_sorted_list.o print_sorted_list2.o addToBack.o sort1.o sort2.o replace_list.o

random_list.o:  random_list.c
	gcc -Wall -c random_list.c

rand_double.o: rand_double.c
	gcc -Wall -c rand_double.c

addToBack.o: addToBack.c
	gcc -Wall -c  addToBack.c

print_list.o: print_list.c
	gcc -Wall -c  print_list.c

print_sorted_list.o: print_sorted_list.c
	gcc -Wall -c  print_sorted_list.c

print_sorted_list2.o: print_sorted_list2.c
	gcc -Wall -c  print_sorted_list2.c

sort1.o: sort1.c
	gcc -Wall -c  sort1.c

sort2.o: sort2.c
	gcc -Wall -c sort2.c

replace_list.o: replace_list.c
	gcc -Wall -c replace_list.c

clean:
	rm -rf *.o
	rm -rf main
