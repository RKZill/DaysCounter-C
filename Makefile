all: dayscalculatorA dayscalculatorB dayscalculatorC dayscalculatorE

dayscalculatorA: daysA.c
	gcc -ansi -Wall -o dayscalculatorA daysA.c
dayscalculatorB: daysB.c
	gcc -ansi -Wall -o dayscalculatorB daysB.c
dayscalculatorC: daysC.c
	gcc -ansi -Wall -o dayscalculatorC daysC.c
dayscalculatorE: dayE.c
	gcc -ansi -Wall -o dayscalculatorE dayE.c
clean:
	rm dayscalculatorA dayscalculatorB dayscalculatorC dayscalculatorE

