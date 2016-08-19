{

  //create a tree file tree1.root - create the file, the Tree and a few branches
  TFile f("tree1.root","recreate");
  TTree t1("t1","a simple Tree with simple variables");
  Float_t px, py, pz;
  Double_t random;
  Int_t ev;
  
  t1.Branch("px",&px,"px/F");
  t1.Branch("py",&py,"py/F");
  t1.Branch("pz",&pz,"pz/F");
  t1.Branch("ev",&ev,"ev/I");

  //fill the tree
  
  for (Int_t i=0; i<10; i++) {
    gRandom->Rannor(px,py);
    pz = px*px + py*py;
    random = gRandom->Rndm();
    ev = i;
    t1.Fill();
  }
  
  //save the Tree heade; the file will be automatically closed
  //when going out of the function scope
  t1.Write();

  f.Close();
  
}
