<?php
/**
 * @file
 * otc_flight.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function otc_flight_taxonomy_default_vocabularies() {
  return array(
    'flight_nationality' => array(
      'name' => 'Flight Nationality',
      'machine_name' => 'flight_nationality',
      'description' => 'Add the nationality classification for flight agency',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
