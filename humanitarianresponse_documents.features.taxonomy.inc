<?php
/**
 * @file
 * humanitarianresponse_documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function humanitarianresponse_documents_taxonomy_default_vocabularies() {
  return array(
    'document_regions' => array(
      'name' => 'Document regions',
      'machine_name' => 'document_regions',
      'description' => 'HumanitarianResponse regions used in documents',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
