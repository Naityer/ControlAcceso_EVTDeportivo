.PHONY: clean All

All:
	@echo "----------Building project:[ PLEDuqueReyTian - Debug ]----------"
	@cd "PLEDuqueReyTian" && "$(MAKE)" -f  "PLEDuqueReyTian.mk"
clean:
	@echo "----------Cleaning project:[ PLEDuqueReyTian - Debug ]----------"
	@cd "PLEDuqueReyTian" && "$(MAKE)" -f  "PLEDuqueReyTian.mk" clean
