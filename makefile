all:
	mkdir Discriminant/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r Discriminant
run:
	cd Discriminant && ./Discrim


