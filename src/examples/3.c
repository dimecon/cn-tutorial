void zero (int *p)
--BEGIN--
/*@ requires take v1 = Block<int>(p)
    ensures take v2 = Owned<int>(p)
@*/
--END--
{
  *p = 0;
}
