SELECT prd.name, prv.name FROM products prd INNER JOIN providers prv ON (
	prd.id_providers = prv.id
) WHERE id_categories = 6;

