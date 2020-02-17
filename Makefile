all: crash debugme leaky overrun

crash: crash.c
	gcc -g crash.c -ocrash

debugme: debugme.c
	gcc -g debugme.c -odebugme

leaky: leaky.c
	gcc -g leaky.c -oleaky

overrun: overrun.c
	gcc -g overrun.c -ooverrun

clean:
	rm crash debugme leaky overrun
	