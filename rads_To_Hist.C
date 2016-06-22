void rads_To_Hist()
{
	//CODE HERE BPLEASE
	TFile * output_file = new TFile ("RADS_Data.root","UPDATE");

	TH1D * hist = new TH1D("hist","Radiation Dosimetry with Altitude",100,0,10000);
	//1D histogram 'D'=double
	//TH1D * hist 

	TTree * t=new TTree("t","RADS_Data");
	//TTree * PointerName = new TTRee("RootNameOfVariable","StringDisplayedInRoot")
	
	t->ReadFile("RADS_long.dat","RAD_cpm/I");
	//t->readfile("StringDisplayedInRoot","FileToReadIn/Interger")
	t->Write();

	output_file->Close();

}
