int addOrSub(int x, int y){

  if(x < y) return x + y;
  else return x-y;

}

int main(){
  
  int x = 5;
  int y = 7;

  addOrSub(x,y);
  return 0;
}
