all:	
	+make -C VirtualKeyword/
	+make -C ExtensionOfCoupledClasses/
	+make -C FilesCompatibility/
	+make -C ProtocolConform/
	+make -C Delegation/

clean:
	find ./ -maxdepth 10 -type f -iname '*.o' -delete;
	find ./ -maxdepth 10 -type f -iname '*~' -delete
