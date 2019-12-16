# DataStructure_Sort
排序

In this topic, we use list to mean a colletion of records, and there is one ore more fileds in a list.

The field, using to distinguish among the records are known as keys, since the same list may be used for several diff apps, the key fields for record id depend on the particular app.

Once we have a collection of records, there are at least 2 ways in which to store them:

      in Sequence.
      ! in Sequence
      
# Sequential Search

Assume that we have a list called f, within a certain key val called k to retrieve with. If f has n records with f[i], key is the key value for record i, 1 =< i =< n, then we may carry out the retrieval by examing the key values f[n].key,...,f[1].key, in this order, until the correct record is located.

