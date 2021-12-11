.PHONY: clean all

all: run

build: run

run:
	hugo server --bind="0.0.0.0" -D &

stop:
	kill -9 $$(ps aux | grep 'hugo server' | grep -v grep | awk -F ' ' '{print $$2}')
	rm .hugo_build.lock

clean:
	rm -r resources
