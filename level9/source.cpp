
void __thiscall N::N(N *this,int param_1)

{
  *(undefined ***)this = &PTR_operator+_08048848;
  *(int *)(this + 104) = param_1;
  return;
}

int __thiscall N::operator+(N *this,N *param_1)

{
  return *(int *)(param_1 + 104) + *(int *)(this + 104);
}



/* N::TEMPNAMEPLACEHOLDERVALUE(N&) */

int __thiscall N::operator-(N *this,N *param_1)

{
  return *(int *)(this + 104) - *(int *)(param_1 + 104);
}



/* N::setAnnotation(char*) */

void __thiscall N::setAnnotation(N *this,char *str)

{
  size_t str_length;
  
  str_length = strlen(str);
  memcpy(this + 4,str,str_length);
  return;
}





void main(int argc,int param_2)

{
  N *this;
  undefined4 *this_00;
  
  if (argc < 2) {
    exit(1);
  }
  this = (N *)new(108);
  N::N(5);
  this_00 = (undefined4 *)new(108);
  N::N(6);
  N::setAnnotation(this,*(char **)(param_2 + 4));
  (**(code **)*this_00)(this_00,this);
  return;
}