all:
	mkdir -p build
	cd cards && $(MAKE)
	cd game && $(MAKE)
	cd post && $(MAKE)
	cd c && $(MAKE)
	cd bonk && $(MAKE)
	@echo 
	@echo "*********************************************"
	@echo "All files Built"
	@echo "Please move to build/ directory"
	@echo "Execute each file accordinly"
	@echo "*********************************************"
	@echo
