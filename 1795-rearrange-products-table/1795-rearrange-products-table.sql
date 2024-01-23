-- Select product_id, store1 as 'store', store1 as 'price' from Products where store1 is not null
SELECT product_id, 'store1' AS store, store1 AS price FROM Products WHERE store1 IS NOT NULL

-- Union with the next set of data
UNION 

-- Select product_id, store2 as 'store', store2 as 'price' from Products where store2 is not null
SELECT product_id, 'store2' AS store, store2 AS price FROM Products WHERE store2 IS NOT NULL

-- Union with the next set of data
UNION 

-- Select product_id, store3 as 'store', store3 as 'price' from Products where store3 is not null
SELECT product_id, 'store3' AS store, store3 AS price FROM Products WHERE store3 IS NOT NULL

-- Combine and order the results(prodduct_id ar store er base e grouping)
ORDER BY 1, 2 ASC; 
 