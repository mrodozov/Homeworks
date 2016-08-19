 #include "/home/rodozov/Projects/CERN/RPCModel/ROOT/ROOT.h"
 
 using namespace std;

void TTreeRead(){
  
  TFile * file = new TFile("tree1.root","READ","in");
  TTree * treeFromFile;
  file->GetObject("t1",treeFromFile);
  
  float ppx, ppy, ppz;
  int evv;
  
  treeFromFile->SetBranchAddress("px",&ppx);
  treeFromFile->SetBranchAddress("py",&ppy);
  treeFromFile->SetBranchAddress("pz",&ppz);
  treeFromFile->SetBranchAddress("ev",&evv);
  
  for (int i = 0 ; i < treeFromFile->GetEntries() ; i++){    
    treeFromFile->GetEvent(i);    
    cout << ppx << " " << ppy << " " << ppz << " " << evv << endl;
  }
  
  
}
